fn a() -> impl b {
	let variable1 = {};
	let variable2 = "";
	variable1.d(variable2)
}

trait b {
	fn d<e>(self, e) -> f<e>;
}

struct f<c> {
	h: e,
}

impl<e> b for e {}