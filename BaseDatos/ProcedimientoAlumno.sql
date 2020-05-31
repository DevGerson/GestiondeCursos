DELIMITER //
CREATE PROCEDURE sp_ins_exp_alumno
(
	IN AlumNombre varchar(1000),
    IN AlumDpi varchar(11),
    IN AlumDireccion varchar(1000)
)
BEGIN
INSERT INTO exp_alumno (nombre,dpi,direccion) VALUES (AlumNombre,AlumDpi,AlumDireccion);
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_udp_exp_alumno
(
	IN AlumCodalumno INT,
	IN AlumNombre varchar(1000),
    IN AlumDpi varchar(11),
    IN AlumDireccion varchar(1000)
)
BEGIN
UPDATE exp_alumno SET nombre = AlumNombre, dpi = AlumDpi, direccion = AlumDireccion WHERE cod_alumno = AlumCodalumno;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_del_exp_alumno
(
	IN pr_cod_alumno INT
)
BEGIN
DELETE FROM exp_alumno WHERE cod_alumno = pr_cod_alumno;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_sel_exp_alumno
(
	IN pr_cod_alumno INT
)
BEGIN
	IF pr_cod_alumno = 0 or pr_cod_alumno IS NULL THEN
		SELECT * FROM exp_alumno;
	ELSE
		SELECT * FROM exp_alumno WHERE cod_alumno = pr_cod_alumno;	
	END IF;
END
// DELIMITER ;



