import std.stdio;

int main() {
	int list[30];

	foreach(n; 0..28) {
		int idx;
		readf("%d\n", &idx);
		list[idx-1]=1;
	}
	foreach(idx, n; list[0..30]) {
		if(n==0) writeln(idx+1);
	}

	return 0;
}
