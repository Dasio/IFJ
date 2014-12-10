var a : real;
vysl : real;

begin
	a := 100000000.0;
	if a < 0.0 then
	begin
		write('Faktorial nelze spocitat')
	end
	else
	begin
		vysl := 1.0;

		while a > 0.0 do
		begin
			vysl := vysl*a;
			a := a - 1.0
		end;

		write('Vysledek je :', vysl, ''#10'')
	end
end.
