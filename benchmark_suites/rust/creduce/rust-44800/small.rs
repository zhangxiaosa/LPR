use std::collections::VecDeque;
struct a {
    c: VecDeque<u8>,
}
struct d {
    data: Vec<u8>,
}
impl a {
    fn e() -> Self {
        let c = VecDeque::with_capacity(32);
        a { c }
    }
    fn len(&self) -> usize {
        self.c.len()
    }
    fn f(&mut self, g: &d) {
        self.c.reserve(g.data.len());
        for b in g.data.iter() {
            self.c.push_front(*b)
        }
    }
    fn h(&mut self, data: &[u8]) {
        self.c.extend(data)
    }
}
impl d {
    fn with_capacity(capacity: usize) -> Self {
        let data = Vec::with_capacity(capacity);
        d { data }
    }
    fn i(&mut self, data: u8) {
        self.data.push(data)
    }
    fn m(&mut self, data: u16) {
        self.data.push(0);
        self.data.push(0)
    }
}
fn j(k: &mut a) {
    let l = k.len();
    let mut g = d::with_capacity(0);
    let b = 5;
    g.i(b);
    g.i(0);
    let hw = l;
    g.m(hw as u16);
    g.m(1);
    g.m(3);
    k.f(&g)
}
fn n(k: &mut a) {
    let mut g = d::with_capacity(0);
    let hw = 0;
    g.m(hw);
    let addr = [1, 2, 3, 4, 5, 6];
    for &b in addr.iter() {
        g.i(b)
    }
    for &b in addr.iter() {
        g.i(b);
        g.i(b)
    }
    g.m(5);
    g.m(hw);
    k.f(&g);
    let fcs = [1];
    println!();
    k.h(&fcs)
}
fn main() {
    let mut k = a::e();
    j(&mut k);
    n(&mut k)
}
