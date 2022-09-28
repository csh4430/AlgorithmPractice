fn main() {
    let mut st = String::new();
    std::io::stdin().read_line(&mut st).unwrap();
    let st = st.trim();
    let st = st.replace("c=", "/");
    let st = st.replace("c-", "/");
    let st = st.replace("dz=", "/");
    let st = st.replace("d-", "/");
    let st = st.replace("lj", "/");
    let st = st.replace("nj", "/");
    let st = st.replace("s=", "/");
    let st = st.replace("z=", "/");
    let st = st.chars();
    let mut cnt: i32 = 0;
    for _ch in st.clone()
    {
        cnt += 1;
    }

    print!("{}", cnt);
}
