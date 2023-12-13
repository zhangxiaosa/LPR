fn a() -> impl b {
    {
        // Function body of `c({})` inlined
    }

    // Function call `d(|| "")` remains the same
}

struct f<e> {
    h: e,
}

fn c<e>(g: e) {}

fn d<F: Fn() -> &str>(f: F) {}

impl<e> b for e {}
