use std::ptr;
              unsafe fn b() -> ([u32; 28], *mut i8, *mut bool) {
                  let mut c = false;
                  let mut v8 = 13978819448286864680_u64;
                  let mut v9 = 0;
                  let mut v20 = [197_u8; 8];
                  let mut f = (false, 0);
                  let mut v33_2_ptr;
                  let ret_0 = [0; 28];
                  let ret_1 = ptr::null_mut();
                  let ret_2;
                  ret_2 = ptr::addr_of_mut!(c);
                  let mut v20_ptr;
                  'l0: loop {
                      v20_ptr = ptr::addr_of_mut!(v20[v9]);
                      v9 = 2_usize;
                      loop {
                          match *v20_ptr {
                              197 => {
                                  v33_2_ptr = ret_2;
                                  'l2: loop {
                                      *v20_ptr = 22;
                                      loop {
                                          let e = v20;
                                          match v8 {
                                              13978819448286864680 => {
                                                  v8 = 13152832795211590855_u64;
                                                  let d = v33_2_ptr;
                                                  v33_2_ptr = ptr::addr_of_mut!(f.0);
                                                  f.1 = *v20_ptr;
                                                  *d = true;
                                                  v20 = e;
                                                  match v39.0 {
                                                      6 => {
                                                          println!("{:?}", f);
                                                      }
                                                      0 => continue 'l2,
                                                      _ => return (ret_0, ret_1, ret_2),
                                                  }
                                              }
                                              _ => continue 'l0,
                                          }
                                      }
                                  }
                              }
                              4 => {
                                  v20_ptr = ptr::addr_of_mut!(v20[v9]);
                              }
                              _ => return (ret_0, ret_1, ret_2),
                          }
                      }
                  }
              }
              fn main() {
                  unsafe {
                      b();
                  }
              }
