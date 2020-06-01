CREATE DATABASE GestionCursos;
USE GestionCursos;

CREATE TABLE pg_departamento
(
	cod_departamento INT PRIMARY KEY AUTO_INCREMENT,
    departamento INT
);

CREATE TABLE pg_centrocosto
(
	cod_centrocosto INT PRIMARY KEY AUTO_INCREMENT,
    centrocosto VARCHAR(1000) NOT NULL,
    cod_institucion INT NOT NULL,
    cod_departamento INT NOT NULL,
    CONSTRAINT fk_pg_departamento FOREIGN KEY (cod_departamento) REFERENCES pg_departamento (cod_departamento)
); 

CREATE TABLE pg_salon
(
	cod_salon INT PRIMARY KEY AUTO_INCREMENT,
    salon VARCHAR(1000) NOT NULL,
    cod_centrocosto INT NOT NULL,
    CONSTRAINT fk_pg_centrocosto FOREIGN KEY (cod_centrocosto) REFERENCES pg_centrocosto (cod_centrocosto)
);

CREATE TABLE pg_tipocurso
(
	cod_tipocurso INT PRIMARY KEY AUTO_INCREMENT,
    tipocurso VARCHAR(1000) NOT NULL
);

CREATE TABLE pg_curso
(
	cod_curso INT PRIMARY KEY AUTO_INCREMENT,
    curso VARCHAR(1000) NOT NULL,
    cod_tipocurso INT NOT NULL,
    cod_centrocosto INT NOT NULL,
    CONSTRAINT fk_pg_tipocurso FOREIGN KEY (cod_tipocurso) REFERENCES pg_tipocurso (cod_tipocurso)
);

CREATE TABLE asg_salon_curso
(
	cod_salon_curso INT PRIMARY KEY AUTO_INCREMENT,
	cod_salon INT NOT NULL,
    cod_curso INT NOT NULL,
    CONSTRAINT fk_asg_pg_salon FOREIGN KEY (cod_salon) REFERENCES pg_salon (cod_salon),
    CONSTRAINT fk_asg_pg_curso FOREIGN KEY (cod_curso) REFERENCES pg_curso (cod_curso)
);

CREATE TABLE exp_alumno
(
	cod_alumno INT PRIMARY KEY AUTO_INCREMENT,
	nombre VARCHAR(1000) NOT NULL,
    dpi INT NULL
);

CREATE TABLE exp_catedratico
(
	cod_catedratico INT PRIMARY KEY AUTO_INCREMENT,
	nombre VARCHAR(1000) NOT NULL,
    dpi INT NULL
);

CREATE TABLE asg_alumno
(
	cod_salon_curso INT NOT NULL,
	cod_alumno INT NOT NULL,
    CONSTRAINT fk_asg_pg_alumno FOREIGN KEY (cod_alumno) REFERENCES exp_alumno (cod_alumno)
);

CREATE TABLE asg_catedratico
(
	cod_salon_curso INT NOT NULL,
	cod_catedratico INT NOT NULL,
    CONSTRAINT fk_asg_pg_catedratico FOREIGN KEY (cod_catedratico) REFERENCES exp_catedratico (cod_catedratico)
);

CREATE TABLE exp_calificacion
(
	cod_calificacion INT PRIMARY KEY AUTO_INCREMENT,
	calificacion DECIMAL(3,2) NOT NULL,
    cod_alumno INT NULL,
    cod_salon_curso INT NULL,
    CONSTRAINT fk_exp_pg_exp_alumno FOREIGN KEY (cod_alumno) REFERENCES exp_alumno (cod_alumno),
    CONSTRAINT fk_exp_pg_asg_salon_curso FOREIGN KEY (cod_salon_curso) REFERENCES asg_salon_curso (cod_salon_curso)
);

   
   
   
   