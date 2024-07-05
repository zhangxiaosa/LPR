fn a() -> impl b {
	let empty_closure = || "";
	f::<e> { h: empty_closure }
}

trait b {
	// fn d<e>(self, e) -> f<e> {}
}

struct f<c> {
	h: c,
}

impl<e> b for e {}
