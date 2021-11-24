# 42CPP_Module_08_2021
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/6ea2cf90d7ca4452a35d2326a3e46038)](https://app.codacy.com/gh/solareenlo/42CPP_Module_08_2021?utm_source=github.com&utm_medium=referral&utm_content=solareenlo/42CPP_Module_08_2021&utm_campaign=Badge_Grade_Settings)
[![Reviewdog](https://github.com/solareenlo/42CPP_Module_08_2021/actions/workflows/reviewdog.yml/badge.svg)](https://github.com/solareenlo/42CPP_Module_08_2021/actions/workflows/reviewdog.yml)
[![Cpplint](https://github.com/solareenlo/42CPP_Module_08_2021/actions/workflows/cpplint.yml/badge.svg)](https://github.com/solareenlo/42CPP_Module_08_2021/actions/workflows/cpplint.yml)
[![Sanitizer](https://github.com/solareenlo/42CPP_Module_08_2021/actions/workflows/sanitizer.yml/badge.svg)](https://github.com/solareenlo/42CPP_Module_08_2021/actions/workflows/sanitizer.yml)
[![Valgrind](https://github.com/solareenlo/42CPP_Module_08_2021/actions/workflows/valgrind.yml/badge.svg)](https://github.com/solareenlo/42CPP_Module_08_2021/actions/workflows/valgrind.yml)
[![Make on Linux](https://github.com/solareenlo/42CPP_Module_08_2021/actions/workflows/make_on_linux.yml/badge.svg)](https://github.com/solareenlo/42CPP_Module_08_2021/actions/workflows/make_on_linux.yml)

## ex02
- [library Containers](https://www.cplusplus.com/reference/stl/)
- [std::stack cplusplus](https://www.cplusplus.com/reference/stack/stack/)
- [std::stack cppreference](https://en.cppreference.com/w/cpp/container/stack)
  - stack はコンテナアダプタと言って，別に標準で実装されているコンテナを改良して作られるコンテナである
  - stack はデフォルトでは `deque` をもとに，`bakc()`, `push_back()`, `pop_back()`, `emplace_back()` が使えるようにされている．
  - stack が使用している元となるコンテナは `container_type` で定義されている
  - stack のソースコードを見てみると良い
  - mac の stack のソースコードでは
    ```c++
    protected:
    container_type c;
    ```
と定義されているので，`std::stack::c.begin()` とか，`std::stack::c.end()` とすれば，stack の元となるコンテナの `begin()`, `end()` が使えて，先頭と最後にアクセスできる
  - ので，stack で iterator を無理やり使いたい場合は，元となるコンテナの iterator を使えば良い．

## ex01
  - [iteratorとconst_iteratorとconst interator](https://qiita.com/_EnumHack/items/a3724dead343b5aecb4e#iterator%E3%81%A8const_iterator%E3%81%A8const-interator)
  - [std::vector<const T>は使えないのか？](https://qiita.com/HO-RI9191/items/6f761af23cf5d288cb9e)
  - vector, sort, vector::begin, vector::front, vector::back

## ex00
  - [std::find cplusplus](https://www.cplusplus.com/reference/algorithm/find/)
  - [Containers library](https://en.cppreference.com/w/cpp/container)
