@echo off

rem certbot renew --webroot -w d:\tmp\certbot.challenge --force-renewal --post-hook certbot.renew.after.bat

@echo on
for %%s in (1 2 3 4 5 6 7 8 9) do robocopy C:\Certbot \\factory%%s\c\Certbot /s