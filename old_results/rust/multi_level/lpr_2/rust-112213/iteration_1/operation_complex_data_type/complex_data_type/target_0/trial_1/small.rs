use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

fn main() {
    let mut a = DefaultHasher::new();

    fn b<T: Hash>(param: T) {
        param.hash(&mut a);
    }

    fn h() {
        let z = [1, 2, 3, 4, 5, 6, 7];

        for i in 0..z.len() {
            b(z[i]);
        }
    }

    h();

    let hash_result = a.finish();
    println!("Hash result: {{}}", hash_result);
}
