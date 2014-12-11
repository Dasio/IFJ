var a : integer;
vysl : integer;

begin
	a := 1000000;
	if a < 0 then
	begin
		write('Faktorial nelze spocitat')
	end
	else
	begin
		vysl := 1;

		while a > 0 do
		begin
			vysl := vysl*a;
			a := a - 1
		end;

		write('Vysledek je :', vysl)
	end
end.
