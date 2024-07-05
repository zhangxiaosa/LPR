fn a() -> impl b {
	{
		let g = {};
		f { h: g }
	}
}

trait b {
	fn d<e>(self, e) -> f<e> {}
}

struct f<c> {
	h: c,
}

impl<e> b for e {}

fn c<e>(g: e) {}
