DELIMITER //
CREATE PROCEDURE sp_ins_exp_calificacion
(
	IN pr_calificacion INT,
    IN pr_cod_alumno INT,
    IN pr_cod_salon_curso INT
)
BEGIN
INSERT INTO exp_calificacion (calificacion,cod_alumno,cod_salon_curso) VALUES (pr_calificacion,pr_cod_alumno,pr_cod_salon_curso);
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_upd_exp_calificacion
(
	IN pr_cod_calificacion INT,
	IN pr_calificacion DECIMAL(3,2),
    IN pr_cod_alumno INT,
    IN pr_cod_salon_curso INT
)
BEGIN
UPDATE exp_calificacion SET calificacion = pr_calificacion,  cod_alumno = pr_cod_alumno, cod_salon_curso = pr_cod_salon_curso WHERE cod_calificacion = pr_cod_calificacion;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_del_exp_calificacion
(
	IN pr_cod_calificacion INT
)
BEGIN
DELETE FROM exp_calificacion WHERE cod_calificacion = pr_cod_calificacion;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_sel_exp_calificacion
(
	IN pr_cod_calificacion INT 
)
BEGIN
	IF pr_cod_calificacion = 0 or pr_cod_calificacion IS NULL THEN
		SELECT * FROM exp_calificacion;
	ELSE
		SELECT * FROM exp_calificacion WHERE cod_calificacion = pr_cod_calificacion;	
	END IF;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_v_sel_exp_calificacion
(
	IN pr_cod_calificacion INT 
)
BEGIN
	IF pr_cod_calificacion = 0 or pr_cod_calificacion IS NULL THEN
		SELECT * FROM exp_calificacion;
	ELSE
		SELECT * FROM exp_calificacion WHERE cod_calificacion = pr_cod_calificacion;	
	END IF;
END
// DELIMITER ;

DELIMITER //
CREATE VIEW v_exp_calificacion
AS
SELECT exp.cod_calificacion,exp.calificacion,al.cod_alumno,al.nombre,c.curso,tp.tipocurso FROM exp_calificacion AS exp 
INNER JOIN exp_alumno AS al ON exp.cod_alumno = al.cod_alumno 
INNER JOIN asg_salon_curso AS sc ON exp.cod_salon_curso = sc.cod_salon_curso 
INNER JOIN pg_curso AS c ON sc.cod_curso = c.cod_curso 
INNER JOIN pg_tipocurso AS tp ON tp.cod_tipocurso = c.cod_tipocurso;
// DELIMITER ;


