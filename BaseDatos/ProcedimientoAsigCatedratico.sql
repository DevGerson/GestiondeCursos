DELIMITER //
CREATE PROCEDURE sp_ins_asg_catedratico
(
    IN pr_cod_salon_curso  INT,
    IN pr_cod_catedratico  INT
)
BEGIN
INSERT INTO asg_catedratico (cod_salon_curso,cod_catedratico) VALUES (pr_cod_salon_curso,pr_cod_catedratico);
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_del_asg_catedratico
(
	IN pr_cod_salon_curso  INT,
    IN pr_cod_catedratico  INT
)
BEGIN
DELETE FROM asg_catedratico WHERE cod_salon_curso = pr_cod_salon_curso and cod_alumno = pr_cod_catedratico;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_sel_asg_catedratico
(
	IN pr_cod_salon_curso  INT,
    IN pr_cod_catedratico  INT
)
BEGIN
	IF pr_cod_salon_curso = 0 or pr_cod_salon_curso IS NULL THEN
		SELECT * FROM asg_catedratico;
	ELSE
		SELECT * FROM asg_catedratico WHERE cod_salon_curso = pr_cod_salon_curso and cod_alumno = pr_cod_catedratico;	
	END IF;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_v_sel_asg_catedratico
(
	IN pr_cod_salon_curso  INT,
    IN pr_cod_catedratico  INT
)
BEGIN
	IF pr_cod_salon_curso = 0 or pr_cod_salon_curso IS NULL THEN
		SELECT asgc.cod_salon_curso,exp.nombre FROM asg_catedratico AS asgc INNER JOIN asg_salon_curso AS cs ON asgc.cod_salon_curso = cs.cod_salon_curso INNER JOIN exp_catedratico AS exp ON asgc.cod_catedratico = exp.cod_catedratico;
	ELSE
		SELECT asgc.cod_salon_curso,exp.nombre FROM asg_catedratico AS asgc INNER JOIN asg_salon_curso AS cs ON asgc.cod_salon_curso = cs.cod_salon_curso INNER JOIN exp_catedratico AS exp ON asgc.cod_catedratico = exp.cod_catedratico WHERE cod_salon_curso = pr_cod_salon_curso and cod_alumno = pr_cod_catedratico;	
	END IF;
END
// DELIMITER ;


