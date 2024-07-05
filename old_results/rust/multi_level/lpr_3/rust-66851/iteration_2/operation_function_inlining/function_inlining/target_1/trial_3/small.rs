fn d() -> MyOption<u64> {
    enum MyOption<T> {
        MySome(T),
        MyNone,
    }
    
    let mut ae = String::new();
    for i in 0..2 {
        ae += &ad[i].to_string();
    }
    if let Ok(r) = ae.parse() {
        MyOption::MySome(r)
    } else {
        MyOption::MyNone
    }
}

fn main() {
    assert_eq!(d(), MyOption::MySome(20313839404245u64));
}