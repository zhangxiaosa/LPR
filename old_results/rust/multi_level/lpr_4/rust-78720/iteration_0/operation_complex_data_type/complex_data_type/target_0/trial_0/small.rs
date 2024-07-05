type c = ...;

type e = ...;

struct f {
    h: e,
}

trait b {
    fn d(self, e) -> f;
}

impl b for e {}

fn a() -> impl b {
    let dict = {};
    dict.d(|| "")
}


"target": "b"
}