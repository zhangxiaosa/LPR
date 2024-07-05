trait b {
    fn d<e: 'static>(self, e) -> f<e>;
}

struct f<c> {
    h: Box<dyn std::any::Any>,
}

impl<e> b for e {}

fn a() -> Box<dyn b> {
    Box::new({}.d::<&str>(""))
}