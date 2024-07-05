fn a() -> impl b {
    let hashmap: HashMap<(), ()> = HashMap::new();
    hashmap.d(|| "")
}

trait b {
    fn d<e>(self, e) -> f<e> {}
}

struct f<Generic> {
    h: Generic,
}

impl<Generic> b for Generic {}