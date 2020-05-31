DELIMITER //
CREATE PROCEDURE sp_ins_pg_curso
(
	IN pr_curso varchar(1000),
    IN pr_cod_tipocurso  INT,
    IN pr_cod_centrocosto  INT
)
BEGIN
INSERT INTO pg_curso (curso,cod_tipocurso,cod_centrocosto) VALUES (pr_curso,pr_cod_tipocurso,pr_cod_centrocosto);
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_udp_pg_curso
(
	IN pr_cod_curso INT,
	IN pr_curso varchar(1000),
    IN pr_cod_tipocurso  INT,
    IN pr_cod_centrocosto  INT
)
BEGIN
UPDATE pg_curso SET curso = pr_curso, cod_tipocurso = pr_cod_tipocurso, cod_centrocosto = pr_cod_centrocosto WHERE cod_curso = pr_cod_curso;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_del_pg_curso
(
	IN pr_cod_curso INT
)
BEGIN
DELETE FROM pg_curso WHERE cod_curso = pr_cod_curso;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_sel_pg_curso
(
	IN pr_cod_curso INT 
)
BEGIN
	IF pr_cod_curso = 0 or pr_cod_curso IS NULL THEN
		SELECT * FROM pg_curso;
	ELSE
		SELECT * FROM pg_curso WHERE cod_curso = pr_cod_curso;	
	END IF;
END
// DELIMITER ;

DELIMITER //
CREATE VIEW v_pg_curso
AS
SELECT c.cod_curso,c.curso,t.cod_tipocurso,t.tipocurso,cc.cod_centrocosto,cc.centrocosto,dp.departamento FROM pg_curso AS c 
INNER JOIN pg_tipocurso AS t ON c.cod_tipocurso = t.cod_tipocurso INNER JOIN pg_centrocosto AS cc ON c.cod_centrocosto = cc.cod_centrocosto
INNER JOIN pg_departamento AS dp ON dp.cod_departamento = cc.cod_departamento;
// DELIMITER ;



