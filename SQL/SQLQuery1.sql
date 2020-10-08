CREATE DATABASE Ders1 /*Creating DB */
/* Comment */
ALTER DATABASE Ders1 MODIFY NAME = Sinif1 /*Changing the database name*/

CREATE DATABASE Ders2 /*Creating DB */
DROP DATABASE Ders2 /*Delete the DB*/

CREATE DATABASE A1 /*Creating DB */
CREATE DATABASE A2 /*Creating DB */
CREATE DATABASE A3 /*Creating DB */

/*If someone is using the spesific DB, you can not delete it.*/
ALTER DATABASE A1 SET SINGLE_USER WITH ROLLBACK IMMEDIATE /*But you can exit from DB*/
DROP DATABASE A1 /*Delete the DB*/
DROP DATABASE A3 /*Delete the DB*/
CREATE DATABASE Deneme /*Creating DB */

/*Sorgusal Tablo Oluþturma*/
/*GenderTable and Primary Key*/
CREATE TABLE GenderTable 
(ID int NOT NULL PRIMARY KEY, 
Gender nvarchar(50) NOT NULL)

/*Sorgu ile FOREIGNKEY oluþturma, ALTER: deðiþtirmek*/
/* ALTER TABLE ForeignKeyTable 
ADD CONSTRAINT ForeignKeyTable_foreignKeyColumns_FK
FOREIGN KEY(foreignKeyColumns) REFERENCES PrimaryKeyTable (PrimaryKeyColumn) */
ALTER TABLE PersonalTable 
ADD CONSTRAINT PersonalTable_GenderId_FK /*Kýsýtlayýcý, baðlayýcý ekleme*/
FOREIGN KEY(GenderId) REFERENCES GenderTable (ID)


