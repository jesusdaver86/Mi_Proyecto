cls
@ECHO OFF
title Carpeta Confidencial
if EXIST "C:\Control Panel.{21EC2020-3AEA-1069-A2DD-08002B30309D}" goto UNLOCK
if NOT EXIST C:\oculto goto MDLOCKER
if NOT EXIST C:\registro goto MDLOCKER
:CONFIRM
echo Esta seguro de que quiere proteger la carpeta(S/N)
set/p "cho=>"
if %cho%==S goto LOCK
if %cho%==s goto LOCK
if %cho%==n goto END
if %cho%==N goto END
echo Clave erronea.
goto CONFIRM
:LOCK
ren C:\oculto "Control Panel.{21EC2020-3AEA-1069-A2DD-08002B30309D}"
attrib +h +s "C:\Control Panel.{21EC2020-3AEA-1069-A2DD-08002B30309D}"
echo Carpeta protegida
goto End
:UNLOCK
echo Ingrese la clave para desproteger su carpeta
set/p "pass=>"
if NOT %pass%== Escriba su Contraseña aqui goto FAIL
attrib -h -s "C:\Control Panel.{21EC2020-3AEA-1069-A2DD-08002B30309D}"
ren "C:\Control Panel.{21EC2020-3AEA-1069-A2DD-08002B30309D}" Confidencial
echo Carpeta desprotegida satisfactoriamente
goto End
AIL
echo Clave erronea
goto end
:MDLOCKER
md C:\oculto
md C:\registro
echo Carpeta Confidencial creada satisfactoriamente
goto End
:End
