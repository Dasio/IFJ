var a:string;
    b:string;
    x:integer;
    y:integer;
    ok:boolean;
begin
	a:=''#%101'bfdgfdiopiop4454gfdgfahiiio74832789uioo';
	b:=sort(a);
	write(a, ''#10'', b, ''#10'');

	x:=2;
	y:=2;
	ok:=x+y+x-y*x/x*y/x*y-x+y-x*y/x*y-x+y/x+y*y >= 5.0 + %101 ;
	write(ok, ''#10'')

end.
