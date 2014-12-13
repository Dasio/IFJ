{ test volania funkcii, chyba mena funkcie read}
var
	num : integer;
	vysl : integer;

function read(n : integer) : integer;

begin
	write('cislo: ', n, ''#10'')
	
end;

begin
	num := 5 ;

	vysl := read(num);
	write('cislo: ', vysl, ''#10'')

end.		


