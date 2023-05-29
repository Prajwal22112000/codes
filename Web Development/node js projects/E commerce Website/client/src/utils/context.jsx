import React from "react";
import { createContext } from "react";

export const Context = createContext();

const AppContext = () => {
  return <Context.Provider>AppContext</Context.Provider>;
};

export default AppContext;
