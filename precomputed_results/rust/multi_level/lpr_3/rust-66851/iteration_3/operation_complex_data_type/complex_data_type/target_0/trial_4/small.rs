fn d() -> Option<u64> {
  	fn n(o: &[i32]) -> Option<u64> {
    	let mut ae = String::new();
    	ae += "00";
    	let r = ae.parse::<u64>();
    	match r {
      		Ok(r) => Some(r),
      		_ => None 
    	}
  	}
  	let o: [i32; 32] = Default::default();
  	match n(&o) {
    	Some(_) => Some(20313839404245u64),
    	_ => None
  	}
}

fn main() {
  	assert_eq!(d(), Some(20313839404245u64));
}