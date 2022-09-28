fn main() {
    let mut st = String::new();
    std::io::stdin().read_line(&mut st).unwrap();
    let st : Vec<&str> = st.trim().split(" ").collect();
    let mut cnt = st.iter().count();
    if st[0] == ""
    {
        cnt = 0;
    }
    print!("{}", cnt);
}
