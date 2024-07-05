fn c() -> bool {
    let mut a = (0., true);
    {
        let k = &mut a;
        let d = (&mut a, (0., false));
        let g = true;
        let h = true;
        
        let i = &mut d.1 .1;
        *i = true;
        return d.1 .1;
    }
}

fn main() {
    println!("{}", c());
}