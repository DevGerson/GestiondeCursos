DELIMITER //
CREATE PROCEDURE sp_ins_asg_salon_curso
(
    IN pr_cod_salon  INT,
    IN pr_cod_curso  INT
)
BEGIN
INSERT INTO asg_salon_curso (cod_salon,cod_curso) VALUES (pr_cod_salon,pr_cod_curso);
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_udp_asg_salon_curso
(
	IN pr_cod_salon_curso INT,
    IN pr_cod_salon  INT,
    IN pr_cod_curso  INT
)
BEGIN
UPDATE asg_salon_curso SET cod_salon = pr_cod_salon, cod_curso = pr_cod_curso WHERE cod_salon_curso = pr_cod_salon_curso;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_del_asg_salon_curso
(
	IN pr_cod_salon_curso INT
)
BEGIN
DELETE FROM asg_salon_curso WHERE cod_salon_curso = pr_cod_salon_curso;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_sel_asg_salon_curso
(
	IN pr_cod_salon_curso INT 
)
BEGIN
	IF pr_cod_salon_curso = 0 or pr_cod_salon_curso IS NULL THEN
		SELECT * FROM asg_salon_curso;
	ELSE
		SELECT * FROM asg_salon_curso WHERE cod_salon_curso = pr_cod_salon_curso;	
	END IF;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_v_sel_asg_salon_curso
(
	IN pr_cod_salon_curso INT 
)
BEGIN
	IF pr_cod_salon_curso = 0 or pr_cod_salon_curso IS NULL THEN
		SELECT sc.cod_salon_curso,s.salon,c.curso FROM asg_salon_curso AS sc INNER JOIN pg_salon AS s ON sc.cod_salon = s.cod_salon INNER JOIN pg_curso AS c ON sc.cod_curso = c.cod_curso;
	ELSE
		SELECT sc.cod_salon_curso,s.salon,c.curso FROM asg_salon_curso AS sc INNER JOIN pg_salon AS s ON sc.cod_salon = s.cod_salon INNER JOIN pg_curso AS c ON sc.cod_curso = c.cod_curso WHERE cod_salon_curso = pr_cod_salon_curso;	
	END IF;
END
// DELIMITER ;


