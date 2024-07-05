fn a() -> f<String> {
    let a = f::<String> { h: "".to_string() };
    let mut map = std::collections::HashMap::new();
    map.d(|| "".to_string(), a)
}

trait b {
    fn d<e, F>(self, e, f) -> f<e>;
}

struct f<c> {
    h: c,
}

impl<e> b for HashMap<(), ()> {
    fn d<e, F>(self, _e, f: f<e>) -> f<e> {
        f
    }
}