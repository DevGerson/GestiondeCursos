DELIMITER //
CREATE PROCEDURE sp_ins_pg_tipocurso
(
	IN pr_tipocurso varchar(1000)
)
BEGIN
INSERT INTO pg_tipocurso (tipocurso) VALUES (pr_tipocurso);
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_udp_pg_tipocurso
(
	IN pr_cod_tipocurso INT,
	IN pr_tipocurso varchar(1000)
)
BEGIN
UPDATE pg_tipocurso SET tipocurso = pr_tipocurso WHERE cod_tipocurso = pr_cod_tipocurso;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_del_pg_tipocurso
(
	IN pr_cod_tipocurso INT
)
BEGIN
DELETE FROM pg_tipocurso WHERE cod_tipocurso = pr_cod_tipocurso;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_sel_pg_tipocurso
(
	IN pr_cod_tipocurso INT 
)
BEGIN
	IF pr_cod_tipocurso = 0 or pr_cod_tipocurso IS NULL THEN
		SELECT * FROM pg_tipocurso;
	ELSE
		SELECT * FROM pg_tipocurso WHERE cod_tipocurso = pr_cod_tipocurso;	
	END IF;
END
// DELIMITER ;

DELIMITER //
CREATE VIEW v_pg_tipocurso
AS
SELECT * FROM pg_tipocurso
// DELIMITER ;


