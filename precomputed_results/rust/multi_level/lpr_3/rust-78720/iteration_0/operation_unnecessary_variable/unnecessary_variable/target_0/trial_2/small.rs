fn a() -> impl b {
   {}
}

trait b {
   fn d<e>(self, e) -> f<e>;
}

struct f<c> {}

impl<e> b for e {}
