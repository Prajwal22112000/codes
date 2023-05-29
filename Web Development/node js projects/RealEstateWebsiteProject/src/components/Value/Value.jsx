import React from "react";
import {
  Accordion,
  AccordionItem,
  AccordionItemHeading,
  AccordionItemButton,
  AccordionItemPanel,
  AccordionItemState,
} from "react-accessible-accordion";
import "react-accessible-accordion/dist/fancy-example.css";
import { MdOutlineArrowDropDown } from "react-icons/md";
import "./Value.css";
import data from "../../utils/accordion";

const Value = () => {
  return (
    <section className="v-wrapper">
      <div className="paddings innerWidth flexCenter v-container">
        <div className=" flexColCenter v-left">
          <img className=" image-container" src="./value.png"></img>
        </div>
        <div className="v-right">
          <div className=" flexColStart text">
            <span className=" greenText ">Our Value</span>
            <br />
            <span className="primaryText">Value We Give to You</span>
            <br />
            <span className=" secondaryGreenText ">
              We are always ready to help by providing the best services for
              you.
              <br />
              We believe a good plce to live can make your life better.
            </span>
          </div>
          <Accordion allowMultipleExpanded={false} preExpanded={[0]}>
            {data.map((value, index) => {
              return (
                <AccordionItem
                  key={index}
                  uuid={index}
                  className="accordionItem"
                >
                  <AccordionItemHeading>
                    <AccordionItemButton className="flexCenter accordionButton">
                      <div className="flexCenter icon">{value.icon}</div>
                      <span className=" greenText">{value.heading}</span>
                      <div className="flexStart icon">
                        <MdOutlineArrowDropDown
                          size={20}
                        ></MdOutlineArrowDropDown>
                      </div>
                    </AccordionItemButton>
                  </AccordionItemHeading>
                  <AccordionItemPanel>
                    <p className="secondaryGreenText">{value.detail}</p>
                  </AccordionItemPanel>
                </AccordionItem>
              );
            })}
          </Accordion>
        </div>
      </div>
    </section>
  );
};

export default Value;
