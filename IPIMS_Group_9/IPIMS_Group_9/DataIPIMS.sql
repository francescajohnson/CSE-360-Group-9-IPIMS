
/* 
NOTE TO ALL MEMBERS OF GROUP 9
This is all code I copied out of MySQL Workbench.

Right now, if you are able to at least get all information from the forms storing into variables and able to out put to the user somehow. That is a great great place to be going into tomorrow.

*/
-----------------------------------------------------------------------------------------------
/* 
registration, CREATE TABLE `registration` (
  `username` varchar(16) NOT NULL,
  `email` varchar(255) NOT NULL,
  `password` varchar(32) NOT NULL,
  `create_time` datetime DEFAULT CURRENT_TIMESTAMP,
  `address` varchar(126) DEFAULT NULL,
  `registrationcol` varchar(45) DEFAULT NULL,
  UNIQUE KEY `username_UNIQUE` (`username`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8



-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='TRADITIONAL,ALLOW_INVALID_DATES';

-- -----------------------------------------------------
-- Schema mydb
-- -----------------------------------------------------
-- -----------------------------------------------------
-- Schema group9_ipims
-- -----------------------------------------------------

-- -----------------------------------------------------
-- Schema group9_ipims
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `group9_ipims` DEFAULT CHARACTER SET utf8 ;
USE `group9_ipims` ;

-- -----------------------------------------------------
-- Table `group9_ipims`.`registration`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `group9_ipims`.`registration` (
  `username` VARCHAR(16) NOT NULL COMMENT '',
  `email` VARCHAR(255) NOT NULL COMMENT '',
  `password` VARCHAR(32) NOT NULL COMMENT '',
  `create_time` DATETIME NULL DEFAULT CURRENT_TIMESTAMP COMMENT '',
  `address` VARCHAR(126) NULL DEFAULT NULL COMMENT '',
  `registrationcol` VARCHAR(45) NULL DEFAULT NULL COMMENT '',
  UNIQUE INDEX `username_UNIQUE` (`username` ASC)  COMMENT '')
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
*/