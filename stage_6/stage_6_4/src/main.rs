fn main() {

    let mut n = String::new();
    std::io::stdin().read_line(&mut n).unwrap();
    let n:i32 = n.trim().parse().expect("");
    for _i in 0..n
    {
        let mut s = String::new();
        std::io::stdin().read_line(&mut s).unwrap();
        let p : Vec<&str> = s.trim().split(" ").collect();
        let s:i32 = (&p[0]).parse().expect("");
        let b = &p[1].chars();


        let mut t : Vec<char> = Vec::new();

        for c in b.clone()
        {
            for _l in 0..s
            
            {
                t.push(c);
            }
        }  

        for p in t
        {
            print!("{}", p);
        }
        println!();

    }

}
