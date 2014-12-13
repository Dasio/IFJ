{ test volania funkcii }
var 
	vysl : integer;

function print (n : integer; num1: integer; num2 : real; num3 : real; num4 : real; num5: integer; num6: integer; num7: integer; num8: integer; num9 : integer  ) : integer;

begin
	write(n , num1, num2, num3, num4, num5, num6, num7, num8, num9 ''#10'');
	print := 1;
end;

begin
	vysl := print (0, 1 , 1.5, 3.5, 4.5, 5, 6, 8, 10, 100);
	write('cislo: ', vysl , ''#10'')
end.		


