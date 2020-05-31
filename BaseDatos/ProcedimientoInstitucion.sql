DELIMITER //
CREATE PROCEDURE sp_ins_pg_institucion
(
	IN pr_institucion varchar(1000)
)
BEGIN
INSERT INTO pg_institucion (institucion) VALUES (pr_institucion);
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_udp_pg_institucion
(
	IN pr_cod_institucion INT,
	IN pr_institucion varchar(1000)
)
BEGIN
UPDATE pg_institucion SET institucion = pr_institucion WHERE cod_institucion = pr_cod_institucion;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_del_pg_institucion
(
	IN pr_cod_institucion INT
)
BEGIN
DELETE FROM pg_institucion WHERE cod_institucion = pr_cod_institucion;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_sel_pg_institucion
(
	IN pr_cod_institucion INT 
)
BEGIN
	IF pr_cod_institucion = 0 or pr_cod_institucion IS NULL THEN
		SELECT * FROM pg_institucion;
	ELSE
		SELECT * FROM pg_institucion WHERE cod_institucion = pr_cod_institucion;	
	END IF;
END
// DELIMITER ;



