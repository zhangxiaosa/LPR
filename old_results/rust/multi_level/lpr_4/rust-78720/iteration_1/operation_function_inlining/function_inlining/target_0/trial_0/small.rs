fn a() -> f<()> {
	f { h: || "" }
}

struct f<c> {
	h: c,
}