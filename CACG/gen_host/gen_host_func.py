def gen_host(environment,h1,w1,w2,A,B,C,A_BRO,C_BRO,X,Y,Z,host_folder):
    template = environment.get_template("host.cpp")
    file_tmp = "host.cpp"
    filename = host_folder / file_tmp
    content = template.render(
        h1=h1,
        w1=w1,
        w2=w2,
        A=A,
        B=B,
        C=C,
        X=X,
        Y=Y,
        Z=Z,
        NUM_TXL=(C//A_BRO),
        NUM_TXR=(A//C_BRO)
    )
    with open(filename, mode="w", encoding="utf-8") as message:
        message.write(content)
        print(f"... wrote {filename}")