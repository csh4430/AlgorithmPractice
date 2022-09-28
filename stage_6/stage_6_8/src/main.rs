fn main() {
    let mut st = String::new();
    std::io::stdin().read_line(&mut st).unwrap();
    let st = st.chars();
    let mut n = 0;

    for ch in st.clone()
    {
        match ch
        {
            'A'..='C' => { n += 3; }
            'D'..='F' => { n += 4; }
            'G'..='I' => { n += 5; }
            'J'..='L' => { n += 6; }
            'M'..='O' => { n += 7; }
            'P'..='S' => { n += 8; }
            'T'..='V' => { n += 9; }
            'W'..='Z' => { n += 10; }
            _=> {}
        }
    }
    print!("{}", n);
}
