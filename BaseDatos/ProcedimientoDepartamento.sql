DELIMITER //
CREATE PROCEDURE sp_ins_pg_departamento
(
	IN pr_departamento varchar(1000)
)
BEGIN
INSERT INTO pg_departamento (departamento) VALUES (pr_departamento);
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_udp_pg_departamento
(
	IN pr_cod_departamento INT,
	IN pr_departamento varchar(1000)
)
BEGIN
UPDATE pg_departamento SET departamento = pr_departamento WHERE cod_departamento = pr_cod_departamento;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_del_pg_departamento
(
	IN pr_cod_departamento INT
)
BEGIN
DELETE FROM pg_departamento WHERE cod_departamento = pr_cod_departamento;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_sel_pg_departamento
(
	IN pr_cod_departamento INT 
)
BEGIN
	IF pr_cod_departamento = 0 or pr_cod_departamento IS NULL THEN
		SELECT * FROM pg_departamento;
	ELSE
		SELECT * FROM pg_departamento WHERE cod_departamento = pr_cod_departamento;	
	END IF;
END
// DELIMITER ;



