struct a {
    c: VecDeque<u8>,
}

impl VecDeque {
    fn push_front_replacement(&mut self, item: u8) {
        if self.len() == self.capacity() {
            self.pop_back();
        }
        let old_len = self.len();
        self.push_back(item);
        for i in (0..old_len).rev() {
            self.swap(i, i + 1);
        }
    }
}

fn main() {
    let mut k = a {
        c: {
            let mut temp = VecDeque::with_capacity(18);
            temp.push_front_replacement(0);
            temp
        },
    };
    k.c.reserve(20);
    println!();
    k.c.extend(&[0xAA]);
}