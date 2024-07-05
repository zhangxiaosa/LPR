fn a() -> impl b {
    struct f<c> {
        h: e,
    }
    let empty_closure = || "";
    f {
        h: empty_closure,
    }
}

trait b {
    fn d<e>(self, e) -> f<e> {
        struct f<c> {
            h: e,
        }

        let empty_closure = || "";
        f {
            h: empty_closure,
        }
    }
}

impl<e> b for e {}
