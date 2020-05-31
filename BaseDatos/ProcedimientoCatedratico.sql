DELIMITER //
CREATE PROCEDURE sp_ins_exp_catedratico
(
	IN nombre varchar(1000),
    IN dpi varchar(11),
    IN direccion varchar(1000)
)
BEGIN
INSERT INTO exp_catedratico (nombre,dpi,direccion) VALUES (nombre,dpi,direccion);
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_udp_exp_catedratico
(
	IN cod_catedratico INT,
	IN nombre varchar(1000),
    IN dpi varchar(11),
    IN direccion varchar(1000)
)
BEGIN
UPDATE exp_catedratico SET nombre = nombre, dpi = dpi, direccion = direccion WHERE cod_catedratico = cod_catedratico;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_del_exp_catedratico
(
	IN pr_cod_catedratico INT
)
BEGIN
DELETE FROM exp_catedratico WHERE cod_catedratico = pr_cod_catedratico;
END
// DELIMITER ;

DELIMITER //
CREATE PROCEDURE sp_sel_exp_catedratico
(
	IN pr_cod_catedratico INT 
)
BEGIN
	IF pr_cod_catedratico = 0 or pr_cod_catedratico IS NULL THEN
		SELECT * FROM exp_catedratico;
	ELSE
		SELECT * FROM exp_catedratico WHERE cod_catedratico = pr_cod_catedratico;	
	END IF;
END
// DELIMITER ;



