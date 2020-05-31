DELIMITER //
CREATE PROCEDURE sp_ins_pg_centrocosto
(
	IN pr_centrocosto varchar(1000),
    IN pr_cod_departamento INT
)
BEGIN
INSERT INTO pg_centrocosto (centrocosto,cod_departamento) VALUES (pr_centrocosto,pr_cod_departamento);
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_udp_pg_centrocosto
(
	IN pr_cod_centrocosto INT,
	IN pr_centrocosto varchar(1000),
    IN pr_cod_departamento INT
)
BEGIN
UPDATE pg_centrocosto SET centrocosto = pr_centrocosto, cod_departamento = pr_cod_departamento  WHERE cod_centrocosto = pr_centrocosto;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_del_pg_centrocosto
(
	IN pr_cod_centrocosto INT
)
BEGIN
DELETE FROM pg_centrocosto WHERE cod_centrocosto = pr_cod_centrocosto;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_sel_pg_centrocosto
(
	IN pr_cod_centrocosto INT 
)
BEGIN
	IF pr_cod_centrocosto = 0 or pr_cod_centrocosto IS NULL THEN
		SELECT * FROM pg_centrocosto;
	ELSE
		SELECT * FROM pg_centrocosto WHERE cod_centrocosto = pr_cod_centrocosto;	
	END IF;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_v_sel_pg_centrocosto
(
	IN pr_cod_centrocosto INT 
)
BEGIN
	IF pr_cod_centrocosto = 0 or pr_cod_centrocosto IS NULL THEN
		SELECT c.cod_centrocosto,c.centrocosto,d.departamento FROM pg_centrocosto AS c INNER JOIN pg_departamento AS d ON d.cod_departamento = c.cod_departamento;	
	ELSE
		SELECT c.cod_centrocosto,c.centrocosto,d.departamento FROM pg_centrocosto AS c INNER JOIN pg_departamento AS d ON d.cod_departamento = c.cod_departamento WHERE c.cod_centrocosto = pr_cod_centrocosto;	
	END IF;
END
// DELIMITER ;



