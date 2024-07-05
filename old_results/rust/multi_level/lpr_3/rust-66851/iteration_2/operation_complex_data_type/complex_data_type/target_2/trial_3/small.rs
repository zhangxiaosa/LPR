fn d() -> Option<u64> {
    enum Option<T> {
        Some(T),
        None,
    }
    struct ArrayOfArrays {
        data: Vec<[i32; 2]>,
    }
    struct IntArray7 {
        data: [i32; 7],
    }
    struct IntArraySlice {
        data: Vec<i32>,
    }
    fn n(o: ArrayOfArrays, is_ac_decomposed: bool, ad: IntArraySlice) -> Option<u64> {
        let mut ae = String::new();
        for i in 0..2 {
            ae += &ad.data[i].to_string();
        }
        if let Ok(r) = ae.parse() {
            Option::Some(r)
        } else {
            Option::None
        }
    }
    let is_ac_decomposed = false;
    let ad: IntArray7 = IntArray7 { data: [0; 7] };
    let o: ArrayOfArrays = ArrayOfArrays { data: Default::default() };
    match n(o, is_ac_decomposed, IntArraySlice { data: ad.data.to_vec() }) {
        Option::Some(_) => Some(20313839404245u64),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20313839404245u64));
}