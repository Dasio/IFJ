var a:boolean;
i:integer;

    function add(x:integer):integer;
    begin
    	add:=x*i
    end;
    
begin
a := true;
i := 1;
if true then
begin
	repeat 
	begin
		write('well done'#10'');
		i := add(2)		
	end
	until i < 4
end
end.

