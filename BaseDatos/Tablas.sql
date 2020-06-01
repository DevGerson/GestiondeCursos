CREATE TABLE IF NOT EXISTS `pg_departamento` (
  `cod_departamento` int(11) NOT NULL AUTO_INCREMENT,
  `departamento` varchar(1000) DEFAULT NULL,
  PRIMARY KEY (`cod_departamento`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

CREATE TABLE IF NOT EXISTS `pg_centrocosto` (
  `cod_centrocosto` int(11) NOT NULL AUTO_INCREMENT,
  `centrocosto` varchar(1000) NOT NULL,
  `cod_departamento` int(11) NOT NULL,
  PRIMARY KEY (`cod_centrocosto`),
  KEY `fk_pg_departamento` (`cod_departamento`),
  CONSTRAINT `fk_pg_departamento` FOREIGN KEY (`cod_departamento`) REFERENCES `pg_departamento` (`cod_departamento`)
) ENGINE=InnoDB AUTO_INCREMENT=9 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

CREATE TABLE IF NOT EXISTS `pg_salon` (
  `cod_salon` int(11) NOT NULL AUTO_INCREMENT,
  `salon` varchar(1000) NOT NULL,
  `cod_centrocosto` int(11) NOT NULL,
  PRIMARY KEY (`cod_salon`),
  KEY `fk_pg_centrocosto` (`cod_centrocosto`),
  CONSTRAINT `fk_pg_centrocosto` FOREIGN KEY (`cod_centrocosto`) REFERENCES `pg_centrocosto` (`cod_centrocosto`)
) ENGINE=InnoDB AUTO_INCREMENT=8 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

CREATE TABLE IF NOT EXISTS `pg_tipocurso` (
  `cod_tipocurso` int(11) NOT NULL AUTO_INCREMENT,
  `tipocurso` varchar(1000) NOT NULL,
  PRIMARY KEY (`cod_tipocurso`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

CREATE TABLE IF NOT EXISTS `pg_curso` (
  `cod_curso` int(11) NOT NULL AUTO_INCREMENT,
  `curso` varchar(1000) NOT NULL,
  `cod_tipocurso` int(11) NOT NULL,
  `cod_centrocosto` int(11) NOT NULL,
  PRIMARY KEY (`cod_curso`),
  KEY `fk_pg_tipocurso` (`cod_tipocurso`),
  CONSTRAINT `fk_pg_tipocurso` FOREIGN KEY (`cod_tipocurso`) REFERENCES `pg_tipocurso` (`cod_tipocurso`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

CREATE TABLE IF NOT EXISTS `asg_salon_curso` (
  `cod_salon_curso` int(11) NOT NULL AUTO_INCREMENT,
  `cod_salon` int(11) NOT NULL,
  `cod_curso` int(11) NOT NULL,
  PRIMARY KEY (`cod_salon_curso`),
  KEY `fk_asg_pg_salon` (`cod_salon`),
  KEY `fk_asg_pg_curso` (`cod_curso`),
  CONSTRAINT `fk_asg_pg_curso` FOREIGN KEY (`cod_curso`) REFERENCES `pg_curso` (`cod_curso`),
  CONSTRAINT `fk_asg_pg_salon` FOREIGN KEY (`cod_salon`) REFERENCES `pg_salon` (`cod_salon`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

CREATE TABLE IF NOT EXISTS `exp_alumno` (
  `cod_alumno` int(11) NOT NULL AUTO_INCREMENT,
  `nombre` varchar(1000) NOT NULL,
  `dpi` int(11) DEFAULT NULL,
  `direccion` varchar(1000) DEFAULT NULL,
  PRIMARY KEY (`cod_alumno`)
) ENGINE=InnoDB AUTO_INCREMENT=10 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

CREATE TABLE `exp_catedratico` (
  `cod_catedratico` int(11) NOT NULL AUTO_INCREMENT,
  `nombre` varchar(1000) NOT NULL,
  `dpi` int(11) DEFAULT NULL,
  `direccion` varchar(1000) DEFAULT NULL,
  PRIMARY KEY (`cod_catedratico`)
) ENGINE=InnoDB AUTO_INCREMENT=14 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;


CREATE TABLE IF NOT EXISTS `asg_alumno` (
  `cod_salon_curso` int(11) NOT NULL,
  `cod_alumno` int(11) NOT NULL,
  KEY `fk_asg_pg_alumno` (`cod_alumno`),
  CONSTRAINT `fk_asg_pg_alumno` FOREIGN KEY (`cod_alumno`) REFERENCES `exp_alumno` (`cod_alumno`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

CREATE TABLE IF NOT EXISTS `asg_catedratico` (
  `cod_salon_curso` int(11) NOT NULL,
  `cod_catedratico` int(11) NOT NULL,
  KEY `fk_asg_pg_catedratico` (`cod_catedratico`),
  CONSTRAINT `fk_asg_pg_catedratico` FOREIGN KEY (`cod_catedratico`) REFERENCES `exp_catedratico` (`cod_catedratico`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

CREATE TABLE IF NOT EXISTS `exp_calificacion` (
  `cod_calificacion` int(11) NOT NULL AUTO_INCREMENT,
  `calificacion` decimal(3,2) NOT NULL,
  `cod_alumno` int(11) DEFAULT NULL,
  `cod_salon_curso` int(11) DEFAULT NULL,
  PRIMARY KEY (`cod_calificacion`),
  KEY `fk_exp_pg_exp_alumno` (`cod_alumno`),
  KEY `fk_exp_pg_asg_salon_curso` (`cod_salon_curso`),
  CONSTRAINT `fk_exp_pg_asg_salon_curso` FOREIGN KEY (`cod_salon_curso`) REFERENCES `asg_salon_curso` (`cod_salon_curso`),
  CONSTRAINT `fk_exp_pg_exp_alumno` FOREIGN KEY (`cod_alumno`) REFERENCES `exp_alumno` (`cod_alumno`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;


