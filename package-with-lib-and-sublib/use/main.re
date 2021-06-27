open Dummy;
let _ = {
  let name = Utils.User.get_uname();
  Banner.dump(name);
};
