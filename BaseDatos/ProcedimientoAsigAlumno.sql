DELIMITER //
CREATE PROCEDURE sp_ins_asg_alumno
(
    IN pr_cod_salon_curso  INT,
    IN pr_cod_alumno  INT
)
BEGIN
INSERT INTO asg_alumno (cod_salon_curso,cod_alumno) VALUES (pr_cod_salon_curso,pr_cod_alumno);
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_del_asg_alumno
(
	IN pr_cod_salon_curso  INT,
    IN pr_cod_alumno  INT
)
BEGIN
DELETE FROM asg_alumno WHERE cod_salon_curso = pr_cod_salon_curso and cod_alumno = pr_cod_alumno;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_sel_asg_alumno
(
	IN pr_cod_salon_curso  INT,
    IN pr_cod_alumno  INT
)
BEGIN
	IF pr_cod_salon_curso = 0 or pr_cod_salon_curso IS NULL THEN
		SELECT * FROM asg_alumno;
	ELSE
		SELECT * FROM asg_alumno WHERE cod_salon_curso = pr_cod_salon_curso and cod_alumno = pr_cod_alumno;	
	END IF;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_v_sel_asg_alumno
(
	IN pr_cod_salon_curso  INT,
    IN pr_cod_alumno  INT
)
BEGIN
	IF pr_cod_salon_curso = 0 or pr_cod_salon_curso IS NULL THEN
		SELECT aa.cod_salon_curso,exp.nombre FROM asg_alumno AS aa INNER JOIN asg_salon_curso AS sc ON aa.cod_salon_curso = sc.cod_salon_curso INNER JOIN exp_alumno AS exp ON aa.cod_alumno = exp.cod_alumno;
	ELSE
		SELECT aa.cod_salon_curso,exp.nombre FROM asg_alumno AS aa INNER JOIN asg_salon_curso AS sc ON aa.cod_salon_curso = sc.cod_salon_curso INNER JOIN exp_alumno AS exp ON aa.cod_alumno = exp.cod_alumno WHERE cod_salon_curso = pr_cod_salon_curso and cod_alumno = pr_cod_alumno;	
	END IF;
END
// DELIMITER ;


