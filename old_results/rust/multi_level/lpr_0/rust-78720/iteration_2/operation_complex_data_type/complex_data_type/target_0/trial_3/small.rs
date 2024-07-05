fn a() -> String {
    let str_var = String::new();
    let closure_var = || String::new();
    str_var.d(closure_var)
}

trait b {
    fn d<e>(self, e) -> f<e> {}
}

struct f<c> {
    h: e,
}

impl<e> b for e {}
