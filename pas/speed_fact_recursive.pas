var
	a : integer;
	vysl : integer;

{ Definice funkce pro vypocet hodnoty faktorialu }
	function factorial(n : integer) : integer;
		var
		temp_result : integer;
		decremented_n : integer;
	begin
		if n < 2 then
			begin
				factorial := 1
			end
		else
			begin
				decremented_n := n - 1;
				temp_result := factorial(decremented_n);
				factorial := n * temp_result
			end
	end;
	{ Hlavni telo programu }
begin
	write('Zadejte cislo pro vypocet faktorialu: ');
	readln(a);
	if a < 0 then
	 { Pokracovani hlavniho tela programu }
	begin
		write('Faktorial nelze spocitat'#10'')
	end
	else
	begin
		vysl := factorial(a);
		write('Vysledek je: ', vysl, ''#10'')
	end
end.
