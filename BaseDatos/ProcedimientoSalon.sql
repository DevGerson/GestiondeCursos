DELIMITER //
CREATE PROCEDURE sp_ins_pg_salon
(
	IN pr_salon varchar(1000),
    IN pr_cod_centrocosto  INT
)
BEGIN
INSERT INTO pg_salon (salon,cod_centrocosto) VALUES (pr_salon,pr_cod_centrocosto);
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_udp_pg_salon
(
	IN pr_cod_salon INT,
	IN pr_salon varchar(1000),
    IN pr_cod_centrocosto  INT
)
BEGIN
UPDATE pg_salon SET salon = pr_salon, cod_centrocosto = pr_cod_centrocosto WHERE cod_salon = pr_cod_salon;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_del_pg_salon
(
	IN pr_cod_salon INT
)
BEGIN
DELETE FROM pg_salon WHERE cod_salon = pr_cod_salon;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_sel_pg_salon
(
	IN pr_cod_salon INT 
)
BEGIN
	IF pr_cod_salon = 0 or pr_cod_salon IS NULL THEN
		SELECT * FROM pg_salon;
	ELSE
		SELECT * FROM pg_salon WHERE cod_salon = pr_cod_salon;	
	END IF;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_v_sel_pg_salon
(
	IN pr_cod_salon INT 
)
BEGIN
	IF pr_cod_salon = 0 or pr_cod_salon IS NULL THEN
		SELECT s.cod_salon,s.salon,cc.centrocosto FROM pg_salon AS s INNER JOIN pg_centrocosto As cc ON s.cod_centrocosto = cc.cod_centrocosto;
	ELSE
		SELECT s.cod_salon,s.salon,cc.centrocosto FROM pg_salon AS s INNER JOIN pg_centrocosto As cc ON s.cod_centrocosto = cc.cod_centrocosto WHERE cod_salon = pr_cod_salon;	
	END IF;
END
// DELIMITER ;






